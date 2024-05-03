#! /usr/bin/env python
from pySecDec.loop_integral import loop_package
import pySecDec as psd

li = psd.loop_integral.LoopIntegralFromGraph(
internal_lines = [['m',[1,2]],['m',[2,3]],[0,[3,4]],['m',[4,1]]],
external_lines = [['p1',1],['p2',2],['p3',3]],
powerlist=[1,1,1,2],
regulators=["eps"],

replacement_rules = [
                        ('p4','p1+p2-p3'),
                        ('(p1+p2)**2', 's'),
                        ('(p1-p3)**2', 't'),
                        ('(p2-p3)**2', '2*m2-s-t'),
                        ('p1**2', 0),
                        ('p2**2', 0),
                        ('p3**2', 'm2'),
                        ('m**2', 'm2')
                    ]

)

Mandelstam_symbols = ['s','t']
mass_symbols = ['m2']

loop_package(

name = 'A1111',

loop_integral = li,

#smallness_parameter="eps",

real_parameters = Mandelstam_symbols + mass_symbols,
    
requested_order= 0,

form_optimization_level = 2,

form_work_space = '100M',

decomposition_method = 'iterative'

)


