/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class STBlueprintScheduleSimpleItem, NSArray;

@interface STBlueprintScheduleRepresentation : NSObject <NSCopying> {

	STBlueprintScheduleSimpleItem* _simpleSchedule;
	NSArray* _customScheduleItems;

}

@property (nonatomic,retain) STBlueprintScheduleSimpleItem * simpleSchedule;              //@synthesize simpleSchedule=_simpleSchedule - In the implementation block
@property (nonatomic,copy) NSArray * customScheduleItems;                                 //@synthesize customScheduleItems=_customScheduleItems - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)customScheduleItems;
-(STBlueprintScheduleSimpleItem *)simpleSchedule;
-(void)setSimpleSchedule:(STBlueprintScheduleSimpleItem *)arg1 ;
-(void)setCustomScheduleItems:(NSArray *)arg1 ;
@end

