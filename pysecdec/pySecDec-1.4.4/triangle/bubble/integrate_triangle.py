from __future__ import print_function
from pySecDec.integral_interface import IntegralLibrary
import sympy as sp

# load c++ library
bubble = IntegralLibrary('triangle/triangle_pylink.so')

# choose integrator
bubble.use_Vegas(flags=2) # ``flags=2``: verbose --> see Cuba manual

# integrate
str_integral_without_prefactor, str_prefactor, str_integral_with_prefactor = bubble(real_parameters=[-1, 0])

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

# examples how to access individual orders
print('Numerical Result')
print('eps^-2:', integral_with_prefactor.coeff('eps',-2).coeff('value'), '+/- (', integral_with_prefactor_err.coeff('eps',-2).coeff('error'), ')')
print('eps^-1:', integral_with_prefactor.coeff('eps',-1).coeff('value'), '+/- (', integral_with_prefactor_err.coeff('eps',-1).coeff('error'), ')')
print('eps^0 :', integral_with_prefactor.coeff('eps',0).coeff('value'), '+/- (', integral_with_prefactor_err.coeff('eps',0).coeff('error'), ')')
print('eps^1 :', integral_with_prefactor.coeff('eps',1).coeff('value'), '+/- (', integral_with_prefactor_err.coeff('eps',1).coeff('error'), ')')
print('eps^2 :', integral_with_prefactor.coeff('eps',2).coeff('value'), '+/- (', integral_with_prefactor_err.coeff('eps',2).coeff('error'), ')')
print('eps^3 :', integral_with_prefactor.coeff('eps',3).coeff('value'), '+/- (', integral_with_prefactor_err.coeff('eps',3).coeff('error'), ')')
print('eps^4 :', integral_with_prefactor.coeff('eps',4).coeff('value'), '+/- (', integral_with_prefactor_err.coeff('eps',4).coeff('error'), ')')
