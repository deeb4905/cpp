#ifndef ZZ_HPP
#define ZZ_HPP

class ZZ {

  std::string nom, prenom;
  double note;
  
  public:

  ZZ(std::string, std::string, int);
  std::string getName() const;
  int getNote() const;

};

#endif