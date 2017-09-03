OBJS = main.o Motor.a

MouseRun : $(OBJS)
	g++ -o MouseRun $(OBJS)

Motor.a : Motor.o
	ar r $@ $<
	ranlib $@

.cpp.o : 
	g++ -c $< -g -O2

all : MouseRun

clean :
	rm -rf *.o *.a MouseRun