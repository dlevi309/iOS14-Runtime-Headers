/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRemoteExecutionRequest.h>
#import <libobjc.A.dylib/WFPBCodable.h>

@class NSString, NSDictionary, WFContentCollection, NSMutableArray, WFRemoteExecutionCoordinator;

@interface WFRemoteExecutionRunRequest : WFRemoteExecutionRequest <WFPBCodable> {

	NSString* _actionIdentifier;
	NSDictionary* _variables;
	NSDictionary* _serializedParameters;
	NSDictionary* _processedParameters;
	WFContentCollection* _input;
	NSMutableArray* _variablesData;
	NSMutableArray* _inputData;
	NSMutableArray* _processedParametersData;
	WFRemoteExecutionCoordinator* _coordinator;

}

@property (nonatomic,retain) NSMutableArray * variablesData;                          //@synthesize variablesData=_variablesData - In the implementation block
@property (nonatomic,retain) NSMutableArray * inputData;                              //@synthesize inputData=_inputData - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedParametersData;                //@synthesize processedParametersData=_processedParametersData - In the implementation block
@property (nonatomic,retain) WFRemoteExecutionCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSString * actionIdentifier;                           //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * variables;                              //@synthesize variables=_variables - In the implementation block
@property (nonatomic,readonly) NSDictionary * serializedParameters;                   //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * processedParameters;                    //@synthesize processedParameters=_processedParameters - In the implementation block
@property (nonatomic,readonly) WFContentCollection * input;                           //@synthesize input=_input - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)version;
-(void)setCoordinator:(WFRemoteExecutionCoordinator *)arg1 ;
-(WFContentCollection *)input;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)variables;
-(NSString *)actionIdentifier;
-(void)setInputData:(NSMutableArray *)arg1 ;
-(NSDictionary *)serializedParameters;
-(NSMutableArray *)inputData;
-(WFRemoteExecutionCoordinator *)coordinator;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(void)inflateWithFileCoordinator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)inflateVariablesData:(id)arg1 fileCoordinator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)variablesData;
-(void)setVariablesData:(NSMutableArray *)arg1 ;
-(NSDictionary *)processedParameters;
-(id)initWithAction:(id)arg1 workflowControllerState:(id)arg2 ;
-(void)inflateInputData:(id)arg1 fileCoordinator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)inflateProcessedParametersData:(id)arg1 fileCoordinator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)processedParametersData;
-(void)setProcessedParametersData:(NSMutableArray *)arg1 ;
@end
