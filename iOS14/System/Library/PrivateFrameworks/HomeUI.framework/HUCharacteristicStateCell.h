/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString;

@interface HUCharacteristicStateCell : UITableViewCell {

	BOOL _enabled;

}

@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * valueText; 
@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setValueText:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)valueText;
@end

