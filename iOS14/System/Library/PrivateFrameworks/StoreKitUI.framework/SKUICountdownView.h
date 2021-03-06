/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIClientContext, SKUICountdown, NSTimer, SKUICountdownViewTimerTarget, UILabel, NSMutableArray, UIImageView, NSNumberFormatter, NSOperationQueue, UIImage;

@interface SKUICountdownView : UIView {

	SKUIClientContext* _clientContext;
	SKUICountdown* _countdown;
	NSTimer* _timer;
	SKUICountdownViewTimerTarget* _timerTarget;
	UILabel* _dateDescriptionLabelDay;
	UILabel* _dateDescriptionLabelHour;
	UILabel* _dateDescriptionLabelMinute;
	UILabel* _dateDescriptionLabelSecond;
	UILabel* _dateLabelDay;
	UILabel* _dateLabelHour;
	UILabel* _dateLabelMinute;
	UILabel* _dateLabelSecond;
	NSMutableArray* _dateFlapLabels;
	NSMutableArray* _numberFlapLabels;
	NSMutableArray* _numberSeparatorLabels;
	UIImageView* _imageView;
	UILabel* _numberLabel;
	NSNumberFormatter* _numberFormatter;
	NSOperationQueue* _operationQueue;
	double _factor;

}

@property (nonatomic,readonly) SKUICountdown * countdown;                      //@synthesize countdown=_countdown - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
-(void)start;
-(SKUIClientContext *)clientContext;
-(void)stop;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(long long)_currentValue;
-(UIImage *)backgroundImage;
-(void)_reload;
-(void)dealloc;
-(void)_setCountdownWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_reloadFontSizes;
-(void)_reloadNumberFlapped;
-(void)_reloadNumber;
-(void)_reloadTimeFlapped;
-(void)_reloadDateDescriptions:(BOOL)arg1 ;
-(void)_reloadTime;
-(id)_newNumberSeparatorLabel;
-(id)_newFlapLabelWithPosition:(long long)arg1 ;
-(void)_currentRemainingDays:(long long*)arg1 hours:(long long*)arg2 minutes:(long long*)arg3 seconds:(long long*)arg4 ;
-(id)_newDateDescriptionLabel;
-(id)_newDateLabel;
-(id)initWithCountdown:(id)arg1 clientContext:(id)arg2 ;
-(SKUICountdown *)countdown;
@end

