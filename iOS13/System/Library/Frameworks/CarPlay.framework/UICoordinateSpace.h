/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/


@protocol UICoordinateSpace <NSObject>
@property (nonatomic,readonly) CGRect bounds; 
@required
-(CGRect)bounds;
-(CGRect*)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;
-(CGRect*)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;

@end

