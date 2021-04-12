/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface _UILargeContentViewerItemStoredProperties : NSObject <NSSecureCoding> {

	BOOL _didSetShowsLargeContentViewer;
	BOOL _showsLargeContentViewer;
	BOOL _didSetLargeContentTitle;
	BOOL _didSetLargeContentImage;
	BOOL _didSetScalesLargeContentImage;
	BOOL _scalesLargeContentImage;
	BOOL _didSetLargeContentImageInsets;
	NSString* _largeContentTitle;
	UIImage* _largeContentImage;
	UIEdgeInsets _largeContentImageInsets;

}

@property (assign,nonatomic) BOOL didSetShowsLargeContentViewer;                //@synthesize didSetShowsLargeContentViewer=_didSetShowsLargeContentViewer - In the implementation block
@property (assign,nonatomic) BOOL showsLargeContentViewer;                      //@synthesize showsLargeContentViewer=_showsLargeContentViewer - In the implementation block
@property (assign,nonatomic) BOOL didSetLargeContentTitle;                      //@synthesize didSetLargeContentTitle=_didSetLargeContentTitle - In the implementation block
@property (nonatomic,copy) NSString * largeContentTitle;                        //@synthesize largeContentTitle=_largeContentTitle - In the implementation block
@property (assign,nonatomic) BOOL didSetLargeContentImage;                      //@synthesize didSetLargeContentImage=_didSetLargeContentImage - In the implementation block
@property (nonatomic,retain) UIImage * largeContentImage;                       //@synthesize largeContentImage=_largeContentImage - In the implementation block
@property (assign,nonatomic) BOOL didSetScalesLargeContentImage;                //@synthesize didSetScalesLargeContentImage=_didSetScalesLargeContentImage - In the implementation block
@property (assign,nonatomic) BOOL scalesLargeContentImage;                      //@synthesize scalesLargeContentImage=_scalesLargeContentImage - In the implementation block
@property (assign,nonatomic) BOOL didSetLargeContentImageInsets;                //@synthesize didSetLargeContentImageInsets=_didSetLargeContentImageInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets largeContentImageInsets;              //@synthesize largeContentImageInsets=_largeContentImageInsets - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)largeContentTitle;
-(UIImage *)largeContentImage;
-(UIEdgeInsets)largeContentImageInsets;
-(BOOL)scalesLargeContentImage;
-(void)setShowsLargeContentViewer:(BOOL)arg1 ;
-(void)setLargeContentTitle:(NSString *)arg1 ;
-(BOOL)didSetShowsLargeContentViewer;
-(BOOL)showsLargeContentViewer;
-(BOOL)didSetLargeContentTitle;
-(BOOL)didSetLargeContentImage;
-(BOOL)didSetScalesLargeContentImage;
-(BOOL)didSetLargeContentImageInsets;
-(void)setDidSetShowsLargeContentViewer:(BOOL)arg1 ;
-(void)setDidSetLargeContentTitle:(BOOL)arg1 ;
-(void)setDidSetLargeContentImage:(BOOL)arg1 ;
-(void)setDidSetScalesLargeContentImage:(BOOL)arg1 ;
-(void)setDidSetLargeContentImageInsets:(BOOL)arg1 ;
-(void)setLargeContentImage:(UIImage *)arg1 ;
-(void)setScalesLargeContentImage:(BOOL)arg1 ;
-(void)setLargeContentImageInsets:(UIEdgeInsets)arg1 ;
@end
