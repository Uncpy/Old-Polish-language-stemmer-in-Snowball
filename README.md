#This is my Old-Polish language translator written in Snowball(http://snowball.tartarus.org/) with simple stemming option(stemming.sbl).


##Running:

1.  gcc -O -o Snowball compiler/*.c
2. ./Snowball sbl_file -o translate/lib_name -ep H_ -utf8
3. gcc -o H_prog translate/*.c
4. ./H_prog IN_FILE -o OUT_FILE

##Example:

#####gcc -O -o Snowball compiler/*.c

#####./Snowball old_to_new_polish.sbl -o translate/old_to_new -ep H_ -utf8

#####gcc -o H_prog translate/*.c

#####./H_prog small_test.txt -o small_test_output.txt


###If you want to stem your output then:

#####./Snowball stemming.sbl -o stemming/pl_stemming -ep H_ -utf8

#####gcc -o H_prog stemming/*.c

#####./H_prog small_test_output.txt -o small_test_output_stem.txt



##All changes should be done in .sbl files and eventually in
DIRECTORY/driver.c(for example .h name).
