/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@protocol CIGVRenderer <GVRenderer>
@property (assign) int direction; 
@property (assign) CGSize separation; 
@property (assign) BOOL drawEdgesFirst; 
@required
-(void)setFileURL:(id)arg1;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2;
-(void)drawNode:(id)arg1;
-(void)drawEdge:(id)arg1 withPath:(id)arg2;
-(int)direction;
-(CGSize)separation;
-(BOOL)drawEdgesFirst;
-(void)setFileTitle:(id)arg1;
-(void)flushRender;
-(void)setDirection:(int)arg1;
-(void)setSeparation:(CGSize)arg1;
-(void)setDrawEdgesFirst:(BOOL)arg1;

@end

