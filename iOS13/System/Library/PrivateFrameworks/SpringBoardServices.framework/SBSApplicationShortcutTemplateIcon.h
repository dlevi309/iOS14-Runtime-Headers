/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString;

@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon {

	NSString* _templateImageName;

}

@property (nonatomic,readonly) NSString * templateImageName;              //@synthesize templateImageName=_templateImageName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithTemplateImageName:(id)arg1 ;
-(id)_initForSubclass;
-(NSString *)templateImageName;
@end

