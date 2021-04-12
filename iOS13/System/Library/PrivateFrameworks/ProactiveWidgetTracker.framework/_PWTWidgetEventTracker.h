/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveWidgetTracker.framework/ProactiveWidgetTracker
*/


@protocol OS_dispatch_queue;
#import <ProactiveWidgetTracker/ProactiveWidgetTracker-Structs.h>
@class NSString, PETScalarEventTracker, PETGoalConversionEventTracker, PETDistributionEventTracker, NSObject;

@interface _PWTWidgetEventTracker : NSObject {

	NSString* _identifier;
	PETScalarEventTracker* _resizeTracker;
	PETGoalConversionEventTracker* _conversionTracker;
	PETScalarEventTracker* _updateTracker;
	PETDistributionEventTracker* _screenLingerTracker;
	PETScalarEventTracker* _foregroundingTracker;
	BOOL _hasReceivedActiveDisplayModeChangeNotificationOnce;
	BOOL _isCurrentlyVisible;
	BOOL _willBecomeVisible;
	BOOL _didBecomeVisibleWhileLocked;
	BOOL _widgetIsForeground;
	BOOL _widgetWasEverForeground;
	long long _activeDisplayMode;
	double _lastAppearTime;
	NSObject*<OS_dispatch_queue> _loggingQueue;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(CGSize)arg2 ;
-(void)widgetDidBecomeForeground:(BOOL)arg1 ;
-(void)widgetWillAppear;
-(void)widgetDidAppear;
-(void)widgetWillDisappear;
-(void)widgetDidDisappear;
-(void)widgetPerformedUpdateWithResult:(unsigned long long)arg1 ;
-(void)userEngagedWithWidget;
@end
