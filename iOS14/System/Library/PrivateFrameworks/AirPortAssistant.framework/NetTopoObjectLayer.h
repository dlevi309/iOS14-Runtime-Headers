/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIImage, NSString, BubbleTextLayer, NSTimer, TopoNumberBadge, TopoProgressBar, NSMutableArray;

@interface NetTopoObjectLayer : CALayer {

	id _associatedNode;
	id _owningView;
	double _layoutScale;
	BOOL _smallSize;
	int _topoStyle;
	CGSize _boundsSizeConstraint;
	UIImage* _statusBadgeImage;
	BOOL _selectable;
	CGColorRef _selectionColor;
	CGColorRef _labelUnselectedFillColor;
	CGColorRef _labelSelectedFillColor;
	CGColorRef _labelSelectedFillColor2;
	CGColorRef _labelUnselectedTextColor;
	CGColorRef _labelSelectedTextColor;
	CGColorRef _secondaryLabelUnselectedTextColor;
	CGColorRef _secondaryLabelSelectedTextColor;
	CGRect _imageFrame;
	CGRect _imageCoreFrame;
	CGRect _imageSelectionFrame;
	double _selectionCornerRadius;
	double _selectionRectOutset;
	NSString* _labelString;
	BubbleTextLayer* _labelLayer;
	double _labelPinnedHeight;
	NSString* _secondaryLabelString;
	BubbleTextLayer* _secondaryLabelLayer;
	UIImage* _statusLights[4];
	NSTimer* _statusLightTimer;
	float _statusLightInterval;
	unsigned _statusLightState;
	unsigned _statusLightMode;
	TopoNumberBadge* _topoNumberBadge;
	unsigned long long _topoBadgeNumber;
	TopoProgressBar* _topoProgressBar;
	float _topoProgressValue;
	id _userObject;
	NSString* _saveLable;
	unsigned long long _row;
	unsigned long long _column;
	CGPoint _layoutOrigin;
	unsigned long long _number;
	double _prelim;
	double _mod;
	double _change;
	double _shift;
	BOOL _isExpanded;
	NetTopoObjectLayer* _contourThread;
	NetTopoObjectLayer* _ancestor;
	BOOL _selected;
	BOOL _ghosted;
	NetTopoObjectLayer* _parent;
	NSMutableArray* _children;
	NSString* _saveLabel;
	CGImageRef _objectImage;

}

@property (assign,nonatomic) double layoutScale;                                 //@synthesize layoutScale=_layoutScale - In the implementation block
@property (assign,nonatomic) BOOL smallSize;                                     //@synthesize smallSize=_smallSize - In the implementation block
@property (assign,nonatomic) CGSize boundsSizeConstraint; 
@property (assign,nonatomic) unsigned long long row;                             //@synthesize row=_row - In the implementation block
@property (assign,nonatomic) unsigned long long column;                          //@synthesize column=_column - In the implementation block
@property (assign,nonatomic) CGPoint layoutOrigin;                               //@synthesize layoutOrigin=_layoutOrigin - In the implementation block
@property (assign,nonatomic) double prelim;                                      //@synthesize prelim=_prelim - In the implementation block
@property (assign,nonatomic) double mod;                                         //@synthesize mod=_mod - In the implementation block
@property (assign,nonatomic) double change;                                      //@synthesize change=_change - In the implementation block
@property (assign,nonatomic) double shift;                                       //@synthesize shift=_shift - In the implementation block
@property (assign,nonatomic) unsigned long long number;                          //@synthesize number=_number - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                    //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) NetTopoObjectLayer * contourThread;                 //@synthesize contourThread=_contourThread - In the implementation block
@property (assign,nonatomic) NetTopoObjectLayer * ancestor;                      //@synthesize ancestor=_ancestor - In the implementation block
@property (nonatomic,retain) id associatedNode;                                  //@synthesize associatedNode=_associatedNode - In the implementation block
@property (assign,nonatomic) id owningView;                                      //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic) double labelPinnedHeight; 
@property (nonatomic,retain) NSString * secondaryLabel; 
@property (nonatomic,retain) NetTopoObjectLayer * parent;                        //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NetTopoObjectLayer * parentDevice; 
@property (nonatomic,retain) NSMutableArray * children;                          //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfChildren; 
@property (nonatomic,retain) CGImageRef objectImage;                             //@synthesize objectImage=_objectImage - In the implementation block
@property (nonatomic,retain) UIImage * statusBadgeImage; 
@property (assign,nonatomic) unsigned statusLightMode; 
@property (assign,nonatomic) unsigned long long topoBadgeNumber;                 //@synthesize topoBadgeNumber=_topoBadgeNumber - In the implementation block
@property (assign,nonatomic) float topoProgressValue; 
@property (nonatomic,retain) id userObject;                                      //@synthesize userObject=_userObject - In the implementation block
@property (nonatomic,retain) NSString * saveLabel;                               //@synthesize saveLabel=_saveLabel - In the implementation block
@property (assign,getter=isSelectable,nonatomic) BOOL selectable;                //@synthesize selectable=_selectable - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isGhosted,nonatomic) BOOL ghosted;                      //@synthesize ghosted=_ghosted - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)setNumber:(unsigned long long)arg1 ;
-(BOOL)smallSize;
-(NSMutableArray *)children;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(void)layoutSublayers;
-(unsigned long long)number;
-(double)mod;
-(double)layoutScale;
-(NetTopoObjectLayer *)parent;
-(void)setShift:(double)arg1 ;
-(void)setChange:(double)arg1 ;
-(void)setOwningView:(id)arg1 ;
-(id)init;
-(id)userObject;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)addChild:(id)arg1 ;
-(unsigned long long)row;
-(BOOL)isSelected;
-(unsigned long long)column;
-(double)change;
-(id)debugDescription;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelectable;
-(void)setParent:(NetTopoObjectLayer *)arg1 ;
-(void)setRow:(unsigned long long)arg1 ;
-(CGPoint)layoutOrigin;
-(void)setLayoutOrigin:(CGPoint)arg1 ;
-(double)prelim;
-(id)owningView;
-(unsigned long long)numberOfChildren;
-(void)setSelectable:(BOOL)arg1 ;
-(id)lastChild;
-(id)firstChild;
-(void)setSmallSize:(BOOL)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setSecondaryLabel:(NSString *)arg1 ;
-(void)setMod:(double)arg1 ;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSString *)label;
-(NSString *)secondaryLabel;
-(double)shift;
-(void)dealloc;
-(void)setColumn:(unsigned long long)arg1 ;
-(void)setUserObject:(id)arg1 ;
-(NetTopoObjectLayer *)ancestor;
-(CGSize)boundsSizeConstraint;
-(void)setBoundsSizeConstraint:(CGSize)arg1 ;
-(void)loadStatusImagesForScale:(double)arg1 ;
-(void)initNetTopoObjectLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2 ;
-(void)setObjectImage:(CGImageRef)arg1 ;
-(void)deallocStatusImages;
-(unsigned)statusLightMode;
-(void)setStatusLightMode:(unsigned)arg1 ;
-(void)setStatusBadgeImagePriv:(id)arg1 ;
-(void)setStatusLightStateFromMode;
-(void)statusLightUpdateTimer:(id)arg1 ;
-(double)labelPinnedHeight;
-(CGImageRef)objectImage;
-(BOOL)isGhosted;
-(id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned long long)arg3 ;
-(id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2 ;
-(void)pickCorrectImagesForContentsScale:(double)arg1 ;
-(NetTopoObjectLayer *)parentDevice;
-(void)setGhosted:(BOOL)arg1 ;
-(void)setLabelPinnedHeight:(double)arg1 ;
-(float)topoProgressValue;
-(void)setTopoProgressValue:(float)arg1 ;
-(void)setTopoBadgeNumber:(unsigned long long)arg1 ;
-(UIImage *)statusBadgeImage;
-(void)setStatusBadgeImage:(UIImage *)arg1 ;
-(void)setLayoutScale:(double)arg1 ;
-(SCD_Struct_Ne15)getConnectionAttachmentLocations;
-(CGRect)getUserInteractionBounds;
-(CGRect)getFrameContainingAllSublayers;
-(void)setPrelim:(double)arg1 ;
-(NetTopoObjectLayer *)contourThread;
-(void)setContourThread:(NetTopoObjectLayer *)arg1 ;
-(void)setAncestor:(NetTopoObjectLayer *)arg1 ;
-(id)associatedNode;
-(void)setAssociatedNode:(id)arg1 ;
-(unsigned long long)topoBadgeNumber;
-(NSString *)saveLabel;
-(void)setSaveLabel:(NSString *)arg1 ;
@end
