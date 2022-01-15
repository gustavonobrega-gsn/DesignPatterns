#ifndef EXTRINSICPRODUCTPART_HPP
#define EXTRINSICPRODUCTPART_HPP

class ExtrinsicProductPart
{
public:

	explicit ExtrinsicProductPart(const int id);
	virtual ~ExtrinsicProductPart();

	int get_id() const;

private:
	int m_id;
};

#endif
