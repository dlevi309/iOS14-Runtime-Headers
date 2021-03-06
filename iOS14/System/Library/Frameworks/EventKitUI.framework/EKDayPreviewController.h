/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKDayViewDataSource.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class NSArray, UIView, EKDayView, NSDate, UIViewController, EKEvent, NSString;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {

	BOOL _firstshow;
	BOOL _userHasTappedToExpand;
	BOOL _isAnimating;
	NSArray* _cachedTimedEvents;
	UIView* _roundedView;
	EKDayView* _dayView;
	NSDate* _date;
	NSDate* _originalEventStartDate;
	NSDate* _originalEventEndDate;
	BOOL _hasOverriddenEventDates;
	NSDate* _overriddenEventStartDate;
	NSDate* _overriddenEventEndDate;
	long long _overriddenParticipantStatus;
	BOOL _hasOverriddenStatus;
	BOOL _requireScrollPositionCorrection;
	BOOL _hidesAllDayEvents;
	BOOL _respectsSelectedCalendarsFilter;
	unsigned long long _style;
	UIViewController* _hostingViewController;
	EKEvent* _event;

}

@property (assign,nonatomic) unsigned long long style;                                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostingViewController;                       //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,nonatomic) BOOL hidesAllDayEvents;                                                //@synthesize hidesAllDayEvents=_hidesAllDayEvents - In the implementation block
@property (assign,nonatomic) BOOL respectsSelectedCalendarsFilter;                                  //@synthesize respectsSelectedCalendarsFilter=_respectsSelectedCalendarsFilter - In the implementation block
@property (assign,nonatomic) long long overriddenParticipantStatus;                                 //@synthesize overriddenParticipantStatus=_overriddenParticipantStatus - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                       //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(BOOL)_eventOccursOnThisDay:(id)arg1 ;
-(id)_eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)toggleExpandedState;
-(id)_anchorEvent;
-(UIViewController *)hostingViewController;
-(id)_hourMaskForEvents:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_dateForFirstHourMarker;
-(void)setHostingViewController:(UIViewController *)arg1 ;
-(void)setHidesAllDayEvents:(BOOL)arg1 ;
-(double)_dayViewHeight;
-(BOOL)hidesAllDayEvents;
-(void)renderPressHighlight:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)respectsSelectedCalendarsFilter;
-(void)_setNewVisibleHourLabels;
-(CGSize)preferredContentSize;
-(void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reload;
-(EKEvent *)event;
-(void)_setupDayView;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(NSRange)_displayedHoursRange;
-(id)_selectedCalendars;
-(void)_setupAutoLayout;
-(void)setEvent:(EKEvent *)arg1 ;
-(BOOL)_shouldShowAllVisibleEvents;
-(void)setOverriddenParticipantStatus:(long long)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
-(void)loadView;
-(long long)overriddenParticipantStatus;
-(id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(unsigned long long)style;
-(void)reloadWithNewDate:(id)arg1 overriddenEventStartDate:(id)arg2 overriddenEventEndDate:(id)arg3 ;
@end

