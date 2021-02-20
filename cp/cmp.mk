CC = g++

a: a.cpp
	${CC} -o h  a.cpp && ./h 

b: b.cpp
	${CC} -o h  b.cpp && ./h 

c: c.cpp
	${CC} -o h  c.cpp && ./h

d: d.cpp
	${CC} -o h  d.cpp && ./h 

e: e.cpp
	${CC} -o h  e.cpp && ./h 

f: f.cpp
	${CC} -o h  f.cpp && ./h


a.in: a.cpp
	${CC} -o h  a.cpp && ./h < in 

b.in: b.cpp
	${CC} -o h  b.cpp && ./h < in 

c.in: c.cpp
	${CC} -o h  c.cpp && ./h < in

d.in: d.cpp
	${CC} -o h  d.cpp && ./h < in 

e.in: e.cpp
	${CC} -o h  e.cpp && ./h < in


	