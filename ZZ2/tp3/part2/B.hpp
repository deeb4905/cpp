#ifndef B_HPP
#define B_HPP

class A;

class B
{
	int j;


	public:

	// Getters/Setters
	void afficher();

	// Other
	void send(A*);
	void exec(int);
};

#endif