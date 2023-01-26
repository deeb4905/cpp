#ifndef A_HPP
#define A_HPP

class B;

class A
{
	int i;


	public:

	// Getters/Setters
	void afficher();

	// Other
	void send(B*);
	void exec(int);
};

#endif