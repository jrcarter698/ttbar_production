from __future__ import print_function
from pySecDec.integral_interface import IntegralLibrary
import sympy as sp

# load c++ library
bubble = IntegralLibrary('bubble2l/bubble2l_pylink.so')

# choose integrator
bubble.use_Vegas(flags=2) # ``flags=2``: verbose --> see Cuba manual

number_of_real_parameters = int(bubble.info['number_of_real_parameters'])
number_of_complex_parameters = int(bubble.info['number_of_complex_parameters'])

#Clear files
x1=open('plot_s_m1_221.txt', 'w')
x1.write('')
x2=open('plot_s_zeroth_221.txt', 'w')
x2.write('')
x3=open('plot_s_first_221.txt', 'w')
x3.write('')
x4=open('plot_s_second_221.txt', 'w')
x4.write('')
x5=open('plot_s_third_221.txt', 'w')
x5.write('')
x6=open('plot_s_fourth_221.txt', 'w')
x6.write('')

with open('kinematics.input') as f:
    for line in f:
            point = line.split()
            assert len(point) == 1+number_of_real_parameters+number_of_complex_parameters, "Invalid point: " + str(point)
            
            # convert to float and complex
            name = point[0]
            vals_real_parameters = [float(point[1+i]) for i in range(number_of_real_parameters)]
            vals_complex_parameters = [complex(point[1+number_of_real_parameters+i]) for i in range(number_of_complex_parameters)]
            
            # compute the integral
            str_integral_without_prefactor, str_prefactor, str_integral_with_prefactor = bubble(vals_real_parameters,vals_complex_parameters)
            
            # convert complex numbers from c++ to sympy notation
            str_integral_with_prefactor = str_integral_with_prefactor.replace(',','+I*')
            str_prefactor = str_prefactor.replace(',','+I*')
            str_integral_without_prefactor = str_integral_without_prefactor.replace(',','+I*')

            # convert result to sympy expressions
            integral_with_prefactor = sp.sympify(str_integral_with_prefactor.replace('+/-','*value+error*'))
            integral_with_prefactor_err = sp.sympify(str_integral_with_prefactor.replace('+/-','*value+error*'))
            prefactor = sp.sympify(str_prefactor)
            integral_without_prefactor = sp.sympify(str_integral_without_prefactor.replace('+/-','*value+error*'))
            integral_without_prefactor_err = sp.sympify(str_integral_without_prefactor.replace('+/-','*value+error*'))

            # separate each order
            str_m1_order=str(integral_with_prefactor.coeff('eps',-1).coeff('value'))
            str_zeroth_order=str(integral_with_prefactor.coeff('eps',0).coeff('value'))
            str_first_order=str(integral_with_prefactor.coeff('eps',1).coeff('value'))
            str_second_order=str(integral_with_prefactor.coeff('eps',2).coeff('value'))
            str_third_order=str(integral_with_prefactor.coeff('eps',3).coeff('value'))
            str_fourth_order=str(integral_with_prefactor.coeff('eps',4).coeff('value'))
            
            #Print the results to multiple files
            with open('plot_s_m1_221.txt', 'a') as resultsfile:
                resultsfile.write(str(point[1]) + ' ' + str_m1_order + '\n')

            with open('plot_s_zeroth_221.txt', 'a') as resultsfile:
                resultsfile.write(str(point[1]) + ' ' + str_zeroth_order + '\n')

            with open('plot_s_first_221.txt', 'a') as resultsfile:
                resultsfile.write(str(point[1]) + ' ' + str_first_order + '\n')

            with open('plot_s_second_221.txt', 'a') as resultsfile:
                resultsfile.write(str(point[1]) + ' ' + str_second_order + '\n')

            with open('plot_s_third_221.txt', 'a') as resultsfile:
                resultsfile.write(str(point[1]) + ' ' + str_third_order + '\n')

            with open('plot_s_fourth_221.txt', 'a') as resultsfile:
                resultsfile.write(str(point[1]) + ' ' + str_fourth_order + '\n')
