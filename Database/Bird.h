#pragma once
#include "Animal.h"

class Bird : public Animal {
public:
	eType GetType() { return eType::Bird; }

	virtual void Read(std::ostream& ostream, std::istream& istream) override;
	virtual void Write(std::ostream& ostream) override;

	virtual void Read(std::ifstream& istream) override;
	virtual void Write(std::ofstream& ostream) override;

protected:
	int m_numEggs = 0;
};