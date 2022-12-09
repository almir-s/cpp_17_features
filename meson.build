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

test('basic', exe)
