
#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


class HeatAndPressureAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    HeatAndPressureAudioProcessorEditor (HeatAndPressureAudioProcessor&);
    ~HeatAndPressureAudioProcessorEditor();

    void paint (Graphics&) override;
    void resized() override;
    
    

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    HeatAndPressureAudioProcessor& processor;

    Slider midiVolume;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HeatAndPressureAudioProcessorEditor)
};
