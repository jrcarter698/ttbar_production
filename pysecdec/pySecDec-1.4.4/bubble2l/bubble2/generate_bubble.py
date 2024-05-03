#! /usr/bin/env python
from pySecDec.loop_integral import loop_package
import pySecDec as psd

li = psd.loop_integral.LoopIntegralFromGraph(
internal_lines = [['m',[1,2]],['m',[2,3]],['m',[3,4]],['m',[4,1]],[0,[3,1]]],
external_lines = [['p',1],['p',3]],

replacement_rules = [
                        ('p*p', 's'),
                        ('m**2', 'm2')
                    ]

)

Mandelstam_symbols = ['s']
mass_symbols = ['m2']

loop_package(

name = 'bubble2l',

loop_integral = li,

real_parameters = Mandelstam_symbols + mass_symbols,
    
requested_order= 4,

form_optimization_level = 2,

form_work_space = '100M',

decomposition_method = 'iterative',

)
