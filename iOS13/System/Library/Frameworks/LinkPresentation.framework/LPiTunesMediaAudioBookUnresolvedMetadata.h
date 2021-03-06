/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaAudioBookUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _author;
	NSString* _narrator;
	LPiTunesMediaAsset* _artwork;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                   //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * author;                            //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * narrator;                          //@synthesize narrator=_narrator - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * artwork;               //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSArray * offers;                           //@synthesize offers=_offers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)resolve;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(LPiTunesMediaAsset *)artwork;
-(void)setArtwork:(LPiTunesMediaAsset *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(NSString *)narrator;
-(void)setNarrator:(NSString *)arg1 ;
-(id)assetsToFetch;
@end

