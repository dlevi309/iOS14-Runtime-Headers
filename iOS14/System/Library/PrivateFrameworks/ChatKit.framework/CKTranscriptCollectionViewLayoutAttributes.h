/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@class NSMutableArray, NSArray, CKChatItem;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	CGRect _targetFrame;
	CGRect _currentFrame;
	double _easing;
	double _targetEasing;
	char _orientation;
	CATransform3D _contentTransform3D;
	double _targetCenterY;
	double _currentCenterY;
	double _height;
	double _factor;
	BOOL _hidden;
	double _associatedVerticalShift;
	NSMutableArray* _associatedLayoutAttributes;
	CKTranscriptCollectionViewLayoutAttributes* _initialParentLayoutAttributes;
	NSArray* _threadGroupLayoutAttributes;
	CKChatItem* _chatItem;
	BOOL _insertingReply;
	CGSize _parentChatItemSize;

}

@property (nonatomic,retain) CKChatItem * chatItem;                                    //@synthesize chatItem=_chatItem - In the implementation block
@property (assign,nonatomic) CGSize parentChatItemSize;                                //@synthesize parentChatItemSize=_parentChatItemSize - In the implementation block
@property (nonatomic,readonly) CATransform3D contentTransform3D;                       //@synthesize contentTransform3D=_contentTransform3D - In the implementation block
@property (assign,getter=isInsertingReply,nonatomic) BOOL insertingReply;              //@synthesize insertingReply=_insertingReply - In the implementation block
-(CKChatItem *)chatItem;
-(id)init;
-(BOOL)isInsertingReply;
-(void)setInsertingReply:(BOOL)arg1 ;
-(void)setAlphaOrFilterLevel:(double)arg1 ;
-(CATransform3D)contentTransform3D;
-(void)setParentChatItemSize:(CGSize)arg1 ;
-(void)setChatItem:(CKChatItem *)arg1 ;
-(CGSize)parentChatItemSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

