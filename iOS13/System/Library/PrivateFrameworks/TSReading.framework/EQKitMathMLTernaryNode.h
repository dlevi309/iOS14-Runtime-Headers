/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>

@class EQKitMathMLNode;

@interface EQKitMathMLTernaryNode : EQKitMathMLNode <EQKitMathMLNode> {

	EQKitMathMLNode* mFirst;
	EQKitMathMLNode* mSecond;
	EQKitMathMLNode* mThird;

}
-(id)init;
-(void)dealloc;
-(BOOL)isBaseFontNameUsed;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >Ref)mathMLAttributes;
-(id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3 ;
@end

