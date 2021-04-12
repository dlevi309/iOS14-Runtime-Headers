/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSArray, SKUIStoreIdentifier;

@interface SKUIItemState : NSObject <NSCopying> {

	float _downloadProgress;
	unsigned long long _downloadContentFlags;
	NSString* _downloadPhase;
	NSNumber* _itemIdentifier;
	NSArray* _downloadIdentifiers;
	SKUIStoreIdentifier* _storeIdentifier;
	unsigned long long _libraryContentFlags;
	long long _mediaCategory;
	unsigned long long _state;
	NSString* _variantIdentifier;

}

@property (nonatomic,readonly) BOOL activeStateIsPreview; 
@property (nonatomic,readonly) unsigned long long allContentFlags; 
@property (assign,nonatomic) unsigned long long downloadContentFlags;              //@synthesize downloadContentFlags=_downloadContentFlags - In the implementation block
@property (nonatomic,copy) NSString * downloadPhase;                               //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (assign,nonatomic) float downloadProgress;                               //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * downloadIdentifiers;                          //@synthesize downloadIdentifiers=_downloadIdentifiers - In the implementation block
@property (nonatomic,copy) SKUIStoreIdentifier * storeIdentifier;                  //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long libraryContentFlags;               //@synthesize libraryContentFlags=_libraryContentFlags - In the implementation block
@property (assign,nonatomic) long long mediaCategory;                              //@synthesize mediaCategory=_mediaCategory - In the implementation block
@property (assign,nonatomic) unsigned long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * variantIdentifier;                           //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(SKUIStoreIdentifier *)storeIdentifier;
-(void)setStoreIdentifier:(SKUIStoreIdentifier *)arg1 ;
-(NSString *)variantIdentifier;
-(void)setVariantIdentifier:(NSString *)arg1 ;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(NSString *)downloadPhase;
-(NSArray *)downloadIdentifiers;
-(void)setDownloadIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)downloadContentFlags;
-(unsigned long long)libraryContentFlags;
-(BOOL)activeStateIsPreview;
-(unsigned long long)allContentFlags;
-(void)setDownloadContentFlags:(unsigned long long)arg1 ;
-(void)setDownloadPhase:(NSString *)arg1 ;
-(void)setLibraryContentFlags:(unsigned long long)arg1 ;
-(long long)mediaCategory;
-(void)setMediaCategory:(long long)arg1 ;
@end
