#ifndef TMP_INIT_HPP
#define TMP_INIT_HPP
namespace tmp
{
	template < typename T >
	struct init ;
}
#include"TMP/cons.hpp"
namespace tmp
{
	template < typename T >
	struct init
		: cons < typename head < T >::type , init < typename tail < T >::type > >
	{
	} ;
	template < typename T >
	struct init < list < T > >
		: list < >
	{
	} ;
}
#endif