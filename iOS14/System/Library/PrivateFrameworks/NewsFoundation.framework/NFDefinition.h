/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@protocol NFDefinitionContainer;
@class Protocol;

@interface NFDefinition : NSObject {

	id<NFDefinitionContainer> _privateAccessContainer;
	id<NFDefinitionContainer> _privateAccessWeakContainer;
	BOOL _canBeOverridden;
	BOOL _canBeNil;
	unsigned long long _source;
	Class _cls;
	Protocol* _protocol;
	/*^block*/id _factory;
	unsigned long long _scope;
	/*^block*/id _validationBlock;
	/*^block*/id _configurationBlock;

}

@property (assign,nonatomic) unsigned long long source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) Class cls;                              //@synthesize cls=_cls - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,copy) id factory;                               //@synthesize factory=_factory - In the implementation block
@property (assign,nonatomic) unsigned long long scope;               //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) BOOL canBeOverridden;                   //@synthesize canBeOverridden=_canBeOverridden - In the implementation block
@property (assign,nonatomic) BOOL canBeNil;                          //@synthesize canBeNil=_canBeNil - In the implementation block
@property (nonatomic,copy) id validationBlock;                       //@synthesize validationBlock=_validationBlock - In the implementation block
@property (nonatomic,copy) id configurationBlock;                    //@synthesize configurationBlock=_configurationBlock - In the implementation block
-(void)setProtocol:(Protocol *)arg1 ;
-(void)setScope:(unsigned long long)arg1 ;
-(unsigned long long)scope;
-(Protocol *)protocol;
-(id)withConfiguration:(/*^block*/id)arg1 ;
-(void)setCanBeNil:(BOOL)arg1 ;
-(void)setCls:(Class)arg1 ;
-(void)setCanBeOverridden:(BOOL)arg1 ;
-(BOOL)canBeNil;
-(void)setSource:(unsigned long long)arg1 ;
-(id)factory;
-(id)withValidation:(/*^block*/id)arg1 ;
-(id)description;
-(id)withPrivateAccessInContainer:(id)arg1 ;
-(id)inScope:(unsigned long long)arg1 ;
-(id)configurationBlock;
-(id)canBeOverridden:(BOOL)arg1 ;
-(id)withPrivateAccessInWeakContainer:(id)arg1 ;
-(void)setFactory:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 factory:(/*^block*/id)arg2 ;
-(id)validationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(id)privateAccessContainer;
-(BOOL)canBeOverridden;
-(id)canBeNil:(BOOL)arg1 ;
-(Class)cls;
-(id)initWithClass:(Class)arg1 factory:(/*^block*/id)arg2 ;
-(void)setValidationBlock:(id)arg1 ;
-(unsigned long long)source;
-(id)initWithUnsafeFactory:(/*^block*/id)arg1 ;
@end

