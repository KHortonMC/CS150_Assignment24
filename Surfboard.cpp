#include <iomanip>
#include "Surfboard.h"

Surfboard::Surfboard(string brand, string model, double length, double width, double thickness, int quantity, double price)
{
	mBrand = brand;
	mModel = model;
	mLength = length;
	mWidth = width;
	mThickness = thickness;
	mQuantity = quantity;
	mPrice = price;
}

bool Surfboard::operator==(const Surfboard& other) const
{
	return mBrand == other.mBrand && mModel == other.mModel && mLength == other.mLength && mWidth == other.mWidth
		&& mThickness == other.mThickness && mQuantity == other.mQuantity && mPrice == other.mPrice;
}

ostream& operator<<(ostream& os, const Surfboard& s)
{
	os << "Surfboard [ID#" << s.mId << ", Brand=" << s.mBrand << ", Model=" << s.mModel << ", Length=" << s.mLength
		<< " ft, Width=" << s.mWidth << " in, Thickness=" << s.mThickness << " in, Quantity=" << s.mQuantity
		<< ", Price=$" << fixed << setprecision(2) << s.mPrice << "]";
	return os;
}
