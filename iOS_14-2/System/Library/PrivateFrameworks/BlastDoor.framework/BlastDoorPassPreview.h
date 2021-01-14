/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, BlastDoorPassPreview_HeaderImage, BlastDoorPassPreview_PassColor;

@interface BlastDoorPassPreview : NSObject {

	 passPreview;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) BlastDoorPassPreview_HeaderImage * headerImage; 
@property (readonly,nonatomic) BlastDoorPassPreview_PassColor * backgroundColor; 
@property (readonly,nonatomic) BlastDoorPassPreview_PassColor * footerColor; 
@property (readonly,nonatomic) NSString * primaryText; 
@property (readonly,nonatomic) BlastDoorPassPreview_PassColor * primaryColor; 
@property (readonly,nonatomic) NSString * secondaryText; 
@property (readonly,nonatomic) BlastDoorPassPreview_PassColor * secondaryColor; 
@property (readonly,nonatomic) NSString * tertiaryText; 
@property (readonly,nonatomic) BlastDoorPassPreview_PassColor * tertiaryColor; 
-(id)init;
-(BlastDoorPassPreview_PassColor *)secondaryColor;
-(BlastDoorPassPreview_PassColor *)backgroundColor;
-(NSString *)description;
-(NSString *)primaryText;
-(NSString *)tertiaryText;
-(BlastDoorPassPreview_HeaderImage *)headerImage;
-(NSString *)secondaryText;
-(BlastDoorPassPreview_PassColor *)primaryColor;
-(BlastDoorPassPreview_PassColor *)tertiaryColor;
-(BlastDoorPassPreview_PassColor *)footerColor;
@end
