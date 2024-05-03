#! /usr/bin/env python
from pySecDec.loop_integral import loop_package
import pySecDec as psd

li = psd.loop_integral.LoopIntegralFromGraph(
internal_lines = [[0,[1,3]],[0,[3,2]],[0,[2,1]]],
external_lines = [['q',1],['p1',2],['p2',3]],

replacement_rules = [
                        ('p1*p2', 's/2'),
                        ('p1*q', 's/2'),
                        ('p2*q', 's/2'),
                        ('p1*p1', 0),
                        ('p2*p2', 0),
                        ('q*q', 's/2'),
                        ('m*m', 'm2')
                    ]

)

Mandelstam_symbols = ['s']
mass_symbols = ['m2']

loop_package(

name = 'triangle',

loop_integral = li,

real_parameters = Mandelstam_symbols + mass_symbols,
    
requested_order= 4,

form_optimization_level = 2,

form_work_space = '100M',

decomposition_method = 'iterative',

)
