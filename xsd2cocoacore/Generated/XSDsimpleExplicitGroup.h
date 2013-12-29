/*
	XSDsimpleExplicitGroup.h
	The interface definition of properties and methods for the XSDsimpleExplicitGroup object.
	Generated by SudzC.com
*/
#import "XMLUtils.h"


	

@interface XSDsimpleExplicitGroup : NSObject

{
	id _minOccurs;
	id _maxOccurs;
	
}
		
	@property (strong, nonatomic) id minOccurs;
	@property (strong, nonatomic) id maxOccurs;

	- (id) initWithNode: (NSXMLNode*) node;

@end