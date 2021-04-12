/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class NSMutableArray, TSDCanvas, TSDLayout;


@protocol TSWPLayoutTarget <NSObject>
@property (nonatomic,retain,readonly) NSMutableArray * columns; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> previousTargetLastColumn; 
@property (nonatomic,readonly) const void* previousTargetTopicNumbers; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> nextTargetFirstColumn; 
@property (nonatomic,readonly) const void* nextTargetTopicNumbers; 
@property (nonatomic,readonly) id<TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer; 
@property (nonatomic,readonly) id<TSWPFootnoteMarkProvider> footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject*<TSDHint> nextTargetFirstChildHint; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) unsigned verticalAlignment; 
@property (nonatomic,readonly) unsigned naturalAlignment; 
@property (nonatomic,readonly) int naturalDirection; 
@property (nonatomic,readonly) BOOL wantsLineFragments; 
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) BOOL layoutIsValid; 
@property (nonatomic,readonly) double maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) BOOL shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
@property (nonatomic,readonly) BOOL allowsLastLineTruncation; 
@property (nonatomic,readonly) double reservedWidthWhenTruncating; 
@property (nonatomic,readonly) unsigned maxLineCount; 
@property (nonatomic,readonly) BOOL ignoresEquationAlignment; 
@property (nonatomic,readonly) BOOL allowsDescendersToClip; 
@property (nonatomic,readonly) BOOL pushAscendersIntoColumn; 
@property (nonatomic,readonly) BOOL alwaysAllowWordSplit; 
@optional
-(unsigned)pageIndex;
-(TSDCanvas *)canvas;
-(BOOL)shouldHyphenate;
-(CFLocaleRef)hyphenationLocale;
-(BOOL)alwaysAllowWordSplit;
-(BOOL)pushAscendersIntoColumn;
-(void)startedIterativePositioningProcessForDrawableAttachment:(id)arg1;
-(void)drawableAttachment:(id)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2;
-(void)drawableAttachment:(id)arg1 didFinalizePosition:(CGPoint)arg2;
-(BOOL)drawableAttachment:(id)arg1 withLayout:(id)arg2 shouldPositionIterativelyInColumn:(id)arg3;
-(CGPoint*)layoutPositionFromInlineAttachmentPosition:(CGPoint)arg1;
-(CGPoint*)layoutPositionFromAnchoredAttachmentPosition:(CGPoint)arg1;
-(CGPoint*)anchoredAttachmentPositionFromLayoutPosition:(CGPoint)arg1;
-(void)scaleTextPercentDidChange:(unsigned long long)arg1;
-(BOOL)invalidateForPageCountChange;
-(id)interiorClippingPath;
-(NSRange*)expandedRangeForLayoutRange:(NSRange)arg1 styleProvider:(id)arg2;
-(BOOL)siblingTargetIsManipulatingDrawable:(id)arg1;
-(BOOL)adjustColumnOriginForAlignment;
-(void)d_dumpAnchoredAttachmentsForRelayout;
-(CGRect)maskRect;
-(NSMutableArray *)anchoredDrawablesForRelayout;
-(void)setAnchoredDrawablesForRelayout:(id)arg1;
-(TSDLayout *)parentLayoutForInlineAttachments;
-(BOOL)allowsLastLineTruncation;
-(double)reservedWidthWhenTruncating;
-(unsigned)maxLineCount;
-(BOOL)ignoresEquationAlignment;
-(BOOL)allowsDescendersToClip;

@required
-(CGPoint)position;
-(NSMutableArray *)columns;
-(unsigned)verticalAlignment;
-(CGPoint)anchorPoint;
-(unsigned long long)pageCount;
-(CGSize)minSize;
-(CGSize)maxSize;
-(unsigned long long)pageNumber;
-(CGSize)currentSize;
-(void)addAttachmentLayout:(id)arg1;
-(BOOL)shouldPositionAttachmentsIteratively;
-(unsigned long long)iterativeAttachmentPositioningMaxPassCount;
-(id)currentInlineDrawableLayouts;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1;
-(id)layoutForInlineDrawable:(id)arg1;
-(BOOL)isLayoutOffscreen;
-(id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2;
-(BOOL)isLastTarget;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1;
-(CGRect*)targetRectForCanvasRect:(CGRect)arg1;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(const void*)previousTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(const void*)nextTargetTopicNumbers;
-(id<TSWPFootnoteHeightMeasurer>)footnoteHeightMeasurer;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(TSPObject*<TSDHint>)nextTargetFirstChildHint;
-(unsigned)autosizeFlags;
-(unsigned)naturalAlignment;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)textIsVertical;
-(BOOL)layoutIsValid;
-(double)maxAnchorY;

@end
