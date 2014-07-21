
#Zachary Gilmartin
#Monday, February 24, 2014

#about: a bash script to compile and execute program

#move into source file
cd ./src

#compile to object code
gcc -I ../h ./* -o magic-word

#move executable outside source file
mv -f ./magic-word ../ 

#move back to origin directory
cd ../