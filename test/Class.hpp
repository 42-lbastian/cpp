#ifndef CLASS_H
#define CLASS_H

class Class
{

public:
	Class(int nb, char c, float f);
	~Class(void);

	int nb;
	char c;
	float f;

	void	ft_print() const;
	int		ft_getNb() const;
	void	ft_setNb(int value);

private:
	int _nb;
};

#endif
