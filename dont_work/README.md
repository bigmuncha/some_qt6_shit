Вывод в при запуске мейка:  
```
omar@omar-HP-Laptop-15s-eq2xxx:~/OmarCAD/dont_work/build$ make 
[ 25%] Automatic MOC for target analog

AutoMoc error
-------------
"SRC:/main.cpp"
contains a "Q_OBJECT" macro, but does not include "main.moc"!
Consider to
  - add #include "main.moc"
  - enable SKIP_AUTOMOC for this file

make[2]: *** [CMakeFiles/analog_autogen.dir/build.make:71: CMakeFiles/analog_autogen] Error 1
make[1]: *** [CMakeFiles/Makefile2:110: CMakeFiles/analog_autogen.dir/all] Error 2
make: *** [Makefile:91: all] Error 2
```
