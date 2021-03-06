/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHHeartRecognitionResult : CHSketchRecognitionResult {

	CGPoint _center;
	CGSize _size;

}

@property (readonly) CGPoint center;              //@synthesize center=_center - In the implementation block
@property (readonly) CGSize size;                 //@synthesize size=_size - In the implementation block
-(CGPoint)center;
-(CGSize)size;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(CGPoint)arg4 size:(CGSize)arg5 ;
@end

