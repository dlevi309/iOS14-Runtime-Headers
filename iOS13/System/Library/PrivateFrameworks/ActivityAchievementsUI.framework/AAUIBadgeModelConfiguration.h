/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/


@class NSString, UIColor, NSArray;

@interface AAUIBadgeModelConfiguration : NSObject {

	BOOL _useFullColorEnamel;
	BOOL _unearnedUsesTwoToneEnamel;
	BOOL _faceHasMetalInlay;
	NSString* _badgeModelPath;
	NSString* _badgeTexturePath;
	NSString* _shapeName;
	UIColor* _metalColor;
	UIColor* _modelEnamelColor;
	NSArray* _enamelTriColors;

}

@property (nonatomic,copy) NSString * badgeModelPath;                     //@synthesize badgeModelPath=_badgeModelPath - In the implementation block
@property (nonatomic,copy) NSString * badgeTexturePath;                   //@synthesize badgeTexturePath=_badgeTexturePath - In the implementation block
@property (nonatomic,copy) NSString * shapeName;                          //@synthesize shapeName=_shapeName - In the implementation block
@property (nonatomic,copy) UIColor * metalColor;                          //@synthesize metalColor=_metalColor - In the implementation block
@property (assign,nonatomic) BOOL useFullColorEnamel;                     //@synthesize useFullColorEnamel=_useFullColorEnamel - In the implementation block
@property (nonatomic,copy) UIColor * modelEnamelColor;                    //@synthesize modelEnamelColor=_modelEnamelColor - In the implementation block
@property (assign,nonatomic) BOOL unearnedUsesTwoToneEnamel;              //@synthesize unearnedUsesTwoToneEnamel=_unearnedUsesTwoToneEnamel - In the implementation block
@property (assign,nonatomic) BOOL faceHasMetalInlay;                      //@synthesize faceHasMetalInlay=_faceHasMetalInlay - In the implementation block
@property (nonatomic,copy) NSArray * enamelTriColors;                     //@synthesize enamelTriColors=_enamelTriColors - In the implementation block
+(id)configurationWithModelPath:(id)arg1 texturePath:(id)arg2 plistPath:(id)arg3 ;
-(id)init;
-(void)setUnearnedUsesTwoToneEnamel:(BOOL)arg1 ;
-(void)setFaceHasMetalInlay:(BOOL)arg1 ;
-(BOOL)unearnedUsesTwoToneEnamel;
-(BOOL)faceHasMetalInlay;
-(id)initWithModelPath:(id)arg1 texturePath:(id)arg2 shapeName:(id)arg3 metalColor:(id)arg4 useFullColorEnamel:(BOOL)arg5 modelEnamelColor:(id)arg6 unearnedUsesTwoToneEnamel:(BOOL)arg7 faceHasMetalInlay:(BOOL)arg8 enamelTricolors:(id)arg9 ;
-(NSString *)badgeModelPath;
-(void)setBadgeModelPath:(NSString *)arg1 ;
-(NSString *)badgeTexturePath;
-(void)setBadgeTexturePath:(NSString *)arg1 ;
-(NSString *)shapeName;
-(void)setShapeName:(NSString *)arg1 ;
-(UIColor *)metalColor;
-(void)setMetalColor:(UIColor *)arg1 ;
-(BOOL)useFullColorEnamel;
-(void)setUseFullColorEnamel:(BOOL)arg1 ;
-(UIColor *)modelEnamelColor;
-(void)setModelEnamelColor:(UIColor *)arg1 ;
-(NSArray *)enamelTriColors;
-(void)setEnamelTriColors:(NSArray *)arg1 ;
@end
