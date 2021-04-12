/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface STKListItem : NSObject <BSXPCCoding> {

	NSString* _text;
	BOOL _selected;

}

@property (nonatomic,copy,readonly) NSString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                     //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)text;
-(BOOL)isSelected;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithText:(id)arg1 selected:(BOOL)arg2 ;
@end
