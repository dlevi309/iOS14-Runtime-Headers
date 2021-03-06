/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSNumber;

@interface ICRadioURLRequest : ICStoreURLRequest {

	BOOL _backgroundRadioRequest;
	NSNumber* _privateListeningEnabled;
	NSNumber* _delegatedPrivateListeningEnabled;
	long long _protocolVersion;
	/*^block*/id _radioContentDictionaryCreationBlock;

}

@property (assign,getter=isBackgroundRadioRequest,nonatomic) BOOL backgroundRadioRequest;                                      //@synthesize backgroundRadioRequest=_backgroundRadioRequest - In the implementation block
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled;                                //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (getter=isDelegatedPrivateListeningEnabled,nonatomic,copy) NSNumber * delegatedPrivateListeningEnabled;              //@synthesize delegatedPrivateListeningEnabled=_delegatedPrivateListeningEnabled - In the implementation block
@property (assign,nonatomic) long long protocolVersion;                                                                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) id radioContentDictionaryCreationBlock;                                                             //@synthesize radioContentDictionaryCreationBlock=_radioContentDictionaryCreationBlock - In the implementation block
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(id)isPrivateListeningEnabled;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(void)setBackgroundRadioRequest:(BOOL)arg1 ;
-(void)setRadioContentDictionaryCreationBlock:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(void)setDelegatedPrivateListeningEnabled:(NSNumber *)arg1 ;
-(void)_decorateHeaderPropertiesForURLRequest:(id)arg1 withBuilderProperties:(id)arg2 ;
-(BOOL)isBackgroundRadioRequest;
-(id)isDelegatedPrivateListeningEnabled;
-(id)radioContentDictionaryCreationBlock;
@end

