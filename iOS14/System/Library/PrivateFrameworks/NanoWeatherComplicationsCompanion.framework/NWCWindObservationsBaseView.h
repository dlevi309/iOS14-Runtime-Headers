/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, UILabel, NSString;

@interface NWCWindObservationsBaseView : UIView <CLKFullColorImageView> {

	id<CLKMonochromeFilterProvider> _filterProvider;
	CLKDevice* _device;
	UILabel* _windDirectionAbbreviationLabel;
	UILabel* _windSpeedLabel;
	UILabel* _windUnitLabel;

}

@property (nonatomic,retain) CLKDevice * device;                                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UILabel * windDirectionAbbreviationLabel;                           //@synthesize windDirectionAbbreviationLabel=_windDirectionAbbreviationLabel - In the implementation block
@property (nonatomic,retain) UILabel * windSpeedLabel;                                           //@synthesize windSpeedLabel=_windSpeedLabel - In the implementation block
@property (nonatomic,retain) UILabel * windUnitLabel;                                            //@synthesize windUnitLabel=_windUnitLabel - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLKDevice *)device;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(long long)supportedComplicationFamily;
-(UILabel *)windDirectionAbbreviationLabel;
-(UILabel *)windSpeedLabel;
-(UILabel *)windUnitLabel;
-(void)_applyConstraintsWithLayoutConstants:(SCD_Struct_NW3)arg1 ;
-(void)_processWindSpeed:(id)arg1 unit:(id)arg2 directionAbbreviation:(id)arg3 ;
-(void)setWindDirectionAbbreviationLabel:(UILabel *)arg1 ;
-(void)setWindSpeedLabel:(UILabel *)arg1 ;
-(void)setWindUnitLabel:(UILabel *)arg1 ;
@end

