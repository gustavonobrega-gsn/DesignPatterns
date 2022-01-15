#ifndef INTRINSICPRODUCTPART_HPP
#define INTRINSICPRODUCTPART_HPP

class IntrinsicProductPart
{
public:

	virtual ~IntrinsicProductPart();

	int get_id() const;

private:

	explicit IntrinsicProductPart(const int id);

	int m_id;

	friend class IntrinsicProductPartLibrary;
};


#endif
