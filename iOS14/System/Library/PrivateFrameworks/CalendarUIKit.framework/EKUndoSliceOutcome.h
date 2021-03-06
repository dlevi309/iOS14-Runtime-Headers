/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKEvent, EKSeriesDetails, EKPostSliceDescription;

@interface EKUndoSliceOutcome : NSObject <NSCopying> {

	EKEvent* _masterToDelete;
	EKSeriesDetails* _mainSeriesDetails;
	EKSeriesDetails* _createdSeriesDetails;
	EKPostSliceDescription* _originalPostSliceDescription;

}

@property (copy) EKEvent * masterToDelete;                                               //@synthesize masterToDelete=_masterToDelete - In the implementation block
@property (copy) EKSeriesDetails * mainSeriesDetails;                                    //@synthesize mainSeriesDetails=_mainSeriesDetails - In the implementation block
@property (copy) EKSeriesDetails * createdSeriesDetails;                                 //@synthesize createdSeriesDetails=_createdSeriesDetails - In the implementation block
@property (readonly) EKPostSliceDescription * originalPostSliceDescription;              //@synthesize originalPostSliceDescription=_originalPostSliceDescription - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKSeriesDetails *)createdSeriesDetails;
-(void)setCreatedSeriesDetails:(EKSeriesDetails *)arg1 ;
-(EKEvent *)masterToDelete;
-(void)setMasterToDelete:(EKEvent *)arg1 ;
-(EKSeriesDetails *)mainSeriesDetails;
-(void)setMainSeriesDetails:(EKSeriesDetails *)arg1 ;
-(EKPostSliceDescription *)originalPostSliceDescription;
@end

