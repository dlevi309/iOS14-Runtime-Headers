/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIBarcodeDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;

}

@property (nonatomic,retain) CIContext * context; 
-(void)dealloc;
-(void)finalize;
-(CIContext *)context;
-(void)setContext:(CIContext *)arg1 ;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
@end

