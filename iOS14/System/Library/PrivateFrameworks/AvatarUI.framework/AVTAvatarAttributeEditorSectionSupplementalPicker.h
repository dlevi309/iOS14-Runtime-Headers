/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionSupplementalPicker.h>
@class NSArray, NSString;


@protocol AVTAvatarAttributeEditorSectionSupplementalPicker <NSObject>
@property (nonatomic,copy,readonly) NSArray * choices; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) BOOL alwaysPresentAlert; 
@required
-(NSString *)localizedTitle;
-(NSArray *)choices;
-(BOOL)alwaysPresentAlert;

@end


@class NSArray, NSString;

@interface AVTAvatarAttributeEditorSectionSupplementalPicker : NSObject <AVTAvatarAttributeEditorSectionSupplementalPicker> {

	BOOL _alwaysPresentAlert;
	NSString* _localizedTitle;
	NSArray* _choices;

}

@property (nonatomic,copy,readonly) NSArray * choices;                      //@synthesize choices=_choices - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) BOOL alwaysPresentAlert;                     //@synthesize alwaysPresentAlert=_alwaysPresentAlert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pickerFromEditorSection:(id)arg1 ;
+(id)pickerForPairableModelCategory:(id)arg1 isPaired:(BOOL)arg2 avatarUpdaterOnPair:(/*^block*/id)arg3 ;
-(NSString *)localizedTitle;
-(NSArray *)choices;
-(id)initWithLocalizedTitle:(id)arg1 choices:(id)arg2 alwaysPresentAlert:(BOOL)arg3 ;
-(id)copyWithLocalizedTitle:(id)arg1 ;
-(BOOL)alwaysPresentAlert;
@end
