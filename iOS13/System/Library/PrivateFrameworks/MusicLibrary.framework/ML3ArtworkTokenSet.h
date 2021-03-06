/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class ML3Entity, NSString, NSDictionary;

@interface ML3ArtworkTokenSet : NSObject {

	ML3Entity* _entity;
	long long _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;
	long long _fetchableArtworkSourceType;
	NSDictionary* _artworkSourceToTokenMap;
	BOOL _faultedInBestTokens;
	BOOL _faultedInTokens;
	double _retrievalTime;

}

@property (assign,nonatomic) double retrievalTime;                                //@synthesize retrievalTime=_retrievalTime - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken; 
@property (nonatomic,readonly) NSString * fetchableArtworkToken; 
@property (nonatomic,readonly) long long fetchableArtworkSourceType; 
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(double)retrievalTime;
-(void)setRetrievalTime:(double)arg1 ;
-(void)_faultInBestTokens;
-(void)_faultInTokens;
-(id)initWithEntity:(id)arg1 artworkType:(long long)arg2 ;
-(long long)fetchableArtworkSourceType;
-(id)artworkTokenForSource:(long long)arg1 ;
@end

