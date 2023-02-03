project('myproject', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++17'])
                    

include_directories('include')
exe = executable('structured_bindings', 'src/structured_binding.cpp', 
  install : true)

exe = executable('if_initializers', 'src/if_statement_initializers.cpp', 
  install : true)


exe = executable('inline_variables', ['src/inline_variables.cpp', 'src/first_class.cpp'], 
  install : true)

exe = executable('if_constexpr', ['src/if_constexpr.cpp'], 
  install : true)

exe = executable('class_template_argument_deduction', ['src/class_template_argument_deduction.cpp'], 
  install : true)

exe = executable('folding_expressions', ['src/folding_expressions.cpp'], 
  install : true)

exe = executable('constexpr_lambda', ['src/constexpr_lambda.cpp'], 
  install : true)

exe = executable('lambda_by_value', ['src/lambda_this_by_value.cpp'], 
  install : true)

exe = executable('lib_features', ['src/lib_features.cpp'], 
  install : true)
