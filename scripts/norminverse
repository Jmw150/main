#!/usr/bin/octave -qf

# unfortunately this program is really slow to exit after calculation


# printf("%s", program_name()); #print like C

arg_list = argv(); # argv is a function

#for i = 1:nargin
#  printf (" %s", arg_list{i});  # for loops are unique, arg{i} i think is a hash
#endfor

#printf ("\n"); 

if (length(arg_list) == 1)

  area = str2num(arg_list{1});
  
  printf("%d\n",norminv(area));
elseif (length(arg_list) == 3)

  area = str2num(arg_list{1});
  mu = str2num(arg_list{2});
  std = str2num(arg_list{3});

  printf("%d\n",norminv(area,mu,std));
else
  printf("norminverse [area/2] (mean) (standard deviation)\n");
endif

