#import <CoreML/MLClassifier.h>
#import <CoreML/_MLDataSource.h>
#import <CoreML/MLDictionaryConstraint.h>
#import <CoreML/MLParameterUtils.h>
#import <CoreML/MLSubtractBroadcastableBrick.h>
#import <CoreML/MLTransposeBrick.h>
#import <CoreML/_MLSNFrameworkHandle.h>
#import <CoreML/_MLNLPSentenceClassifierModel.h>
#import <CoreML/MLModelCollection.h>
#import <CoreML/MLSplitNDBrick.h>
#import <CoreML/MLBackgroundTask.h>
#import <CoreML/MLBackgroundPredictionTask.h>
#import <CoreML/MLTileBrick.h>
#import <CoreML/MLStackNDBrick.h>
#import <CoreML/MLImageSize.h>
#import <CoreML/MLAddBroadcastableBrick.h>
#import <CoreML/MLSoftmaxNDBrick.h>
#import <CoreML/MLAppleGazetteerParameters.h>
#import <CoreML/MLAppleGazetteer.h>
#import <CoreML/MLMultiArrayUtils.h>
#import <CoreML/MLMultiArray.h>
#import <CoreML/MLMultiArrayAsNSArrayWrapper.h>
#import <CoreML/MLMultiArrayView.h>
#import <CoreML/MLParameterDescription.h>
#import <CoreML/MLSVREngine.h>
#import <CoreML/MLModelErrorUtils.h>
#import <CoreML/MLNeuralNetworkCompiler.h>
#import <CoreML/MLNeuralNetworkContainer.h>
#import <CoreML/MLNeuralNetworkEngine.h>
#import <CoreML/MLParameterKey.h>
#import <CoreML/MLDefaultCustomModelFactory.h>
#import <CoreML/MLCustomModelLoader.h>
#import <CoreML/MLCustomModelWrapper.h>
#import <CoreML/MLModelConfiguration.h>
#import <CoreML/MLSVRLoader.h>
#import <CoreML/MLLayerExecutionSchedule.h>
#import <CoreML/MLSineBrick.h>
#import <CoreML/MLArrayBatchProvider.h>
#import <CoreML/MLKNearestNeighborsClassifier.h>
#import <CoreML/MLMultiplyBroadcastableBrick.h>
#import <CoreML/MLModelDescription.h>
#import <CoreML/MLCosineBrick.h>
#import <CoreML/MLPipelineClassifier.h>
#import <CoreML/MLMultiArrayShapeConstraint.h>
#import <CoreML/MLErfActivationBrick.h>
#import <CoreML/MLItemSimilarityRecommender.h>
#import <CoreML/MLObjectBoundingBoxOutputDescription.h>
#import <CoreML/MLIdentity.h>
#import <CoreML/MLVersionInfo.h>
#import <CoreML/MLParameterContainer.h>
#import <CoreML/MLKey.h>
#import <CoreML/MLUpdateContext.h>
#import <CoreML/MLSVMEngine.h>
#import <CoreML/MLCustomLayerWrapper.h>
#import <CoreML/MLPersistentKeyStorage.h>
#import <CoreML/MLFeatureProviderUtils.h>
#import <CoreML/MLLazyUnionFeatureProvider.h>
#import <CoreML/MLTreeEnsembleRegressor.h>
#import <CoreML/MLImageConstraint.h>
#import <CoreML/MLModelAsset.h>
#import <CoreML/MLFloorBrick.h>
#import <CoreML/MLFeatureValue.h>
#import <CoreML/MLBatchedMatMulBrick.h>
#import <CoreML/MLWrappedModel.h>
#import <CoreML/MLWritableWrappedModel.h>
#import <CoreML/MLDivideBroadcastableBrick.h>
#import <CoreML/_MLVNScenePrintCustomModel.h>
#import <CoreML/MLPowBroadcastableBrick.h>
#import <CoreML/MLArchivingUtils.h>
#import <CoreML/_MLNLPWordTaggingModel.h>
#import <CoreML/MLModelTypeRegistry.h>
#import <CoreML/MLNeuralNetworkUpdateEngine.h>
#import <CoreML/_MLVNFrameworkHandle.h>
#import <CoreML/MLSecureModel.h>
#import <CoreML/MLSecureModelDecryptCredential.h>
#import <CoreML/CoreMLModelSecurityServiceToClient.h>
#import <CoreML/MLArrayDictionaryFeatureProvider.h>
#import <CoreML/MLTreeEnsembleClassifier.h>
#import <CoreML/_MLSNVGGishFeatureEmbedding.h>
#import <CoreML/MLLoader.h>
#import <CoreML/MLRangeBrick.h>
#import <CoreML/MLExpBrick.h>
#import <CoreML/MLCeilBrick.h>
#import <CoreML/MLFeatureDescription.h>
#import <CoreML/MLNearestNeighborsLinearIndex.h>
#import <CoreML/MLModelVisionFeaturePrintInfo.h>
#import <CoreML/MLPipeline.h>
#import <CoreML/MLSupportVectorRegressor.h>
#import <CoreML/MLGLMRegression.h>
#import <CoreML/CoreMLVersion.h>
#import <CoreML/_MLSNVGGishFrontendProcessing.h>
#import <CoreML/MLModelExecutionSchedule.h>
#import <CoreML/MLLoaderEvent.h>
#import <CoreML/MLGatherBrick.h>
#import <CoreML/MLBroadcastToBrick.h>
#import <CoreML/MLGKDecisionTree.h>
#import <CoreML/MLReporter.h>
#import <CoreML/MLReporterUtils.h>
#import <CoreML/MLSliceNDBrick.h>
#import <CoreML/MLSequence.h>
#import <CoreML/MLSequnceAsFeatureValueArray.h>
#import <CoreML/MLModelInterface.h>
#import <CoreML/_MLBatchDataSource.h>
#import <CoreML/MLFairPlayDecryptSessionManager.h>
#import <CoreML/MLFairPlayDecryptSession.h>
#import <CoreML/MLGeluActivationBrick.h>
#import <CoreML/MLKNearestNeighborsClassifierParameters.h>
#import <CoreML/MLBackgroundRunner.h>
#import <CoreML/MLCompilerOptions.h>
#import <CoreML/MLCompilerResult.h>
#import <CoreML/MLCompiler.h>
#import <CoreML/MLSaver.h>
#import <CoreML/MLLogging.h>
#import <CoreML/MLUpdateProgressHandlersUtils.h>
#import <CoreML/MLUpdateProgressHandlers.h>
#import <CoreML/MLModelCollectionEntry.h>
#import <CoreML/MLMetricKey.h>
#import <CoreML/MLModel.h>
#import <CoreML/MLAppleImageFeatureExtractorScenePrintParameters.h>
#import <CoreML/MLAppleImageFeatureExtractorObjectPrintParameters.h>
#import <CoreML/MLAppleImageFeatureExtractorParameters.h>
#import <CoreML/MLAppleImageFeatureExtractor.h>
#import <CoreML/MLTreeEnsembleXGBoostClassifier.h>
#import <CoreML/MLRegressorResult.h>
#import <CoreML/MLRegressor.h>
#import <CoreML/MLDataConversionUtils.h>
#import <CoreML/MLNeuralNetworkUpdateUtils.h>
#import <CoreML/MLFeatureTypeUtils.h>
#import <CoreML/MLLinkedModel.h>
#import <CoreML/MLNumericConstraint.h>
#import <CoreML/MLCloudSession.h>
#import <CoreML/_MLInternalNLPModelWriter.h>
#import <CoreML/MLNNLayerComputeUnitSelectionUtils.h>
#import <CoreML/InternalCustomTileLike.h>
#import <CoreML/MLModelEncryptionUtils.h>
#import <CoreML/MLDictionaryFeatureProvider.h>
#import <CoreML/MLPipelineRegressor.h>
#import <CoreML/MLSupportVectorClassifier.h>
#import <CoreML/MLKeyManager.h>
#import <CoreML/MLPipelineUpdateEngine.h>
#import <CoreML/MLProgramContainer.h>
#import <CoreML/MLClassifierResult.h>
#import <CoreML/_MLVNDetectionPrintCustomModel.h>
#import <CoreML/MLSlidingWindowsBrick.h>
#import <CoreML/MLNeuralNetworksCompileTimeParams.h>
#import <CoreML/MLAppleTextClassifierParameters.h>
#import <CoreML/MLAppleTextClassifier.h>
#import <CoreML/MLPipelineLoader.h>
#import <CoreML/_KDNode.h>
#import <CoreML/MLNearestNeighborsSingleKdTreeIndex.h>
#import <CoreML/MLShufflingBatchProvider.h>
#import <CoreML/MLDefaultCustomLayerFactory.h>
#import <CoreML/MLNonMaximumSuppressionParameters.h>
#import <CoreML/MLNonMaximumSuppression.h>
#import <CoreML/MLClipBrick.h>
#import <CoreML/InternalCustomGatherTree.h>
#import <CoreML/MLProgramEngine.h>
#import <CoreML/MLUpdateTask.h>
#import <CoreML/_MLNLPFrameworkHandle.h>
#import <CoreML/MLCloudDeploymentUtils.h>
#import <CoreML/MLFeatureFlags.h>
#import <CoreML/MLPredictionOptions.h>
#import <CoreML/MLAppleWordTaggerParameters.h>
#import <CoreML/MLAppleWordTagger.h>
#import <CoreML/MLBatchProviderUtils.h>
#import <CoreML/MLLazyUnionBatchProvider.h>
#import <CoreML/MLWindowedBatchProvider.h>
#import <CoreML/MLIndexedBatchProvider.h>
#import <CoreML/MLConcatNDBrick.h>
#import <CoreML/MLSVMLoader.h>
#import <CoreML/MLAppleSoundAnalysisPreprocessing.h>
#import <CoreML/MLImputer.h>
#import <CoreML/MLSupervisedOnlineUpdateOptions.h>
#import <CoreML/MLModelIOUtils.h>
#import <CoreML/MLGLMClassification.h>
#import <CoreML/_MLModelCodeGeneratorOptions.h>
#import <CoreML/MLSequenceConstraint.h>
#import <CoreML/MLFairPlayKeyLoadingSession.h>
#import <CoreML/MLModelDescriptionUtils.h>
#import <CoreML/MLTreeEnsembleXGBoostUpdateEngine.h>
#import <CoreML/MLModelMetadata.h>
#import <CoreML/MLFeatureVectorizer.h>
#import <CoreML/MLDictVectorizer.h>
#import <CoreML/MLFillBrick.h>
#import <CoreML/MLNormalizer.h>
#import <CoreML/MLAppleWordEmbeddingParameters.h>
#import <CoreML/MLAppleWordEmbedding.h>
#import <CoreML/MLTask.h>
#import <CoreML/MLCategoricalMapping.h>
#import <CoreML/MLScaler.h>
#import <CoreML/MLOneHotEncoder.h>
#import <CoreML/MLInternalSettings.h>
#import <CoreML/MLBayesianProbitRegression.h>
#import <CoreML/MLProbabilityDictionary.h>
#import <CoreML/MLStringProbabilityDictionary.h>
#import <CoreML/MLInt64ProbabilityDictionary.h>
#import <CoreML/MLStringProbabilityDictionaryEnumerator.h>
#import <CoreML/MLInt64ProbabilityDictionaryEnumerator.h>
#import <CoreML/MLLayerPath.h>
#import <CoreML/MLMultiArrayConstraint.h>
#import <CoreML/MLImageSizeConstraint.h>
#import <CoreML/MLArrayFeatureExtractor.h>
#import <CoreML/MLBackgroundWatchdog.h>
