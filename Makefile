CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -std=c11
CXXFLAGS = -Wall -Wextra -std=c++17

all:
	$(CC) $(CFLAGS) 01_stack_demo.c -o 01_stack_demo
	$(CC) $(CFLAGS) 02_malloc_notes.c -o 02_malloc_notes
	$(CC) $(CFLAGS) 03_tableau_dynamique.c -o 03_tableau_dynamique
	$(CC) $(CFLAGS) 04_bug_A_original.c -o 04_bug_A_original
	$(CC) $(CFLAGS) 04_bug_A_corrige.c -o 04_bug_A_corrige
	$(CC) $(CFLAGS) 05_bug_B_original.c -o 05_bug_B_original
	$(CC) $(CFLAGS) 05_bug_B_corrige.c -o 05_bug_B_corrige
	$(CC) $(CFLAGS) 06_bug_C_original.c -o 06_bug_C_original
	$(CC) $(CFLAGS) 06_bug_C_corrige.c -o 06_bug_C_corrige
	$(CXX) $(CXXFLAGS) 07_hello.cpp -o 07_hello
	$(CXX) $(CXXFLAGS) 08_references.cpp -o 08_references
	$(CXX) $(CXXFLAGS) 09_fiche.cpp -o 09_fiche
	$(CXX) $(CXXFLAGS) 10_point.cpp -o 10_point
	$(CXX) $(CXXFLAGS) 11_compteur.cpp -o 11_compteur
	$(CXX) $(CXXFLAGS) 12_etudiant.cpp -o 12_etudiant

clean:
	rm -f 01_stack_demo 02_malloc_notes 03_tableau_dynamique
	rm -f 04_bug_A_original 04_bug_A_corrige 05_bug_B_original 05_bug_B_corrige
	rm -f 06_bug_C_original 06_bug_C_corrige 07_hello 08_references 09_fiche
	rm -f 10_point 11_compteur 12_etudiant
