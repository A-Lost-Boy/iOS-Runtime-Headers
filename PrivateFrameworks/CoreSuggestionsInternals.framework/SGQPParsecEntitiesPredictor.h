/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGQPParsecEntitiesPredictor : NSObject {
    SGQPPhrasebook * _phraseBoook;
    double  _timeHalfLife;
    struct NSDictionary { Class x1; } * _weights;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithWeights:(struct NSDictionary { Class x1; }*)arg1 phraseBook:(id)arg2;
- (id)predictionsForMessages:(id)arg1;

@end