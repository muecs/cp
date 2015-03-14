CellProfiler Pipeline: http://www.cellprofiler.org
Version:1
SVNRevision:11710

LoadImages:[module_num:1|svn_version:\'11587\'|variable_revision_number:11|show_window:False|notes:\x5B\x5D]
    File type to be loaded:individual images
    File selection method:Text-Exact match
    Number of images in each group?:3
    Type the text that the excluded images have in common:Do not use
    Analyze all subfolders within the selected folder?:All
    Input image file location:Default Input Folder\x7CNone
    Check image sets for missing or duplicate files?:Yes
    Group images by metadata?:No
    Exclude certain files?:No
    Specify metadata fields to group by:
    Select subfolders to analyze:
    Image count:1
    Text that these images have in common (case-sensitive):.tif
    Position of this image in each group:1
    Extract metadata from where?:Both
    Regular expression that finds metadata in the file name:(?P<Number>\x5B0-9\x5D+)
    Type the regular expression that finds metadata in the subfolder path:.*\x5B\\\\/\x5D(?P<Group>.*)$
    Channel count:1
    Group the movie frames?:No
    Grouping method:Interleaved
    Number of channels per group:3
    Load the input as images or objects?:Images
    Name this loaded image:Original
    Name this loaded object:Nuclei
    Retain outlines of loaded objects?:No
    Name the outline image:LoadedImageOutlines
    Channel number:1
    Rescale intensities?:Yes

ColorToGray:[module_num:2|svn_version:\'10318\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select the input image:Original
    Conversion method:Split
    Image type\x3A:Channels
    Name the output image:OrigGray
    Relative weight of the red channel:1
    Relative weight of the green channel:1
    Relative weight of the blue channel:1
    Convert red to gray?:Yes
    Name the output image:OrigRed
    Convert green to gray?:Yes
    Name the output image:OrigGreen
    Convert blue to gray?:Yes
    Name the output image:OrigBlue
    Channel count:3
    Channel number\x3A:Red\x3A 1
    Relative weight of the channel:1
    Image name\x3A:RedOriginal
    Channel number\x3A:Green\x3A 2
    Relative weight of the channel:1
    Image name\x3A:GreenOriginal
    Channel number\x3A:Blue\x3A 3
    Relative weight of the channel:1
    Image name\x3A:BlueOriginal

CorrectIlluminationCalculate:[module_num:3|svn_version:\'10458\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select the input image:RedOriginal
    Name the output image:RedIllum
    Select how the illumination function is calculated:Background
    Dilate objects in the final averaged image?:No
    Dilation radius:1
    Block size:15
    Rescale the illumination function?:No
    Calculate function for each image individually, or based on all images?:Each
    Smoothing method:Gaussian Filter
    Method to calculate smoothing filter size:Automatic
    Approximate object size:10
    Smoothing filter size:10
    Retain the averaged image for use later in the pipeline (for example, in SaveImages)?:No
    Name the averaged image:IllumBlueAvg
    Retain the dilated image for use later in the pipeline (for example, in SaveImages)?:No
    Name the dilated image:IllumBlueDilated
    Automatically calculate spline parameters?:Yes
    Background mode:auto
    Number of spline points:5
    Background threshold:2
    Image resampling factor:2
    Maximum number of iterations:40
    Residual value for convergence:0.001

CorrectIlluminationCalculate:[module_num:4|svn_version:\'10458\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select the input image:GreenOriginal
    Name the output image:GreenIllum
    Select how the illumination function is calculated:Background
    Dilate objects in the final averaged image?:No
    Dilation radius:1
    Block size:10
    Rescale the illumination function?:No
    Calculate function for each image individually, or based on all images?:Each
    Smoothing method:Gaussian Filter
    Method to calculate smoothing filter size:Automatic
    Approximate object size:20
    Smoothing filter size:10
    Retain the averaged image for use later in the pipeline (for example, in SaveImages)?:No
    Name the averaged image:IllumBlueAvg
    Retain the dilated image for use later in the pipeline (for example, in SaveImages)?:No
    Name the dilated image:IllumBlueDilated
    Automatically calculate spline parameters?:Yes
    Background mode:auto
    Number of spline points:5
    Background threshold:2
    Image resampling factor:2
    Maximum number of iterations:40
    Residual value for convergence:0.001

CorrectIlluminationCalculate:[module_num:5|svn_version:\'10458\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select the input image:BlueOriginal
    Name the output image:BlueIllum
    Select how the illumination function is calculated:Background
    Dilate objects in the final averaged image?:No
    Dilation radius:1
    Block size:15
    Rescale the illumination function?:No
    Calculate function for each image individually, or based on all images?:Each
    Smoothing method:Gaussian Filter
    Method to calculate smoothing filter size:Automatic
    Approximate object size:10
    Smoothing filter size:10
    Retain the averaged image for use later in the pipeline (for example, in SaveImages)?:No
    Name the averaged image:IllumBlueAvg
    Retain the dilated image for use later in the pipeline (for example, in SaveImages)?:No
    Name the dilated image:IllumBlueDilated
    Automatically calculate spline parameters?:Yes
    Background mode:auto
    Number of spline points:5
    Background threshold:2
    Image resampling factor:2
    Maximum number of iterations:40
    Residual value for convergence:0.001

CorrectIlluminationApply:[module_num:6|svn_version:\'10300\'|variable_revision_number:3|show_window:False|notes:\x5B\x5D]
    Select the input image:RedOriginal
    Name the output image:RedCorr
    Select the illumination function:RedIllum
    Select how the illumination function is applied:Subtract
    Select the input image:GreenOriginal
    Name the output image:GreenCorr
    Select the illumination function:GreenIllum
    Select how the illumination function is applied:Subtract
    Select the input image:BlueOriginal
    Name the output image:BlueCorr
    Select the illumination function:BlueIllum
    Select how the illumination function is applied:Subtract

RescaleIntensity:[module_num:7|svn_version:\'6746\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select the input image:GreenCorr
    Name the output image:GreenRescaled
    Select rescaling method:Stretch each image to use the full intensity range
    How do you want to calculate the minimum intensity?:Custom
    How do you want to calculate the maximum intensity?:Custom
    Enter the lower limit for the intensity range for the input image:0
    Enter the upper limit for the intensity range for the input image:1
    Enter the intensity range for the input image:0.000000,1.000000
    Enter the desired intensity range for the final, rescaled image:0.000000,1.000000
    Select method for rescaling pixels below the lower limit:Mask pixels
    Enter custom value for pixels below lower limit:0
    Select method for rescaling pixels above the upper limit:Mask pixels
    Enter custom value for pixels below upper limit:0
    Select image to match in maximum intensity:None
    Enter the divisor:1
    Select the measurement to use as a divisor:None

ApplyThreshold:[module_num:8|svn_version:\'6746\'|variable_revision_number:5|show_window:False|notes:\x5B\x5D]
    Select the input image:GreenRescaled
    Name the output image:GreenThresh
    Select the output image type:Grayscale
    Set pixels below or above the threshold to zero?:Below threshold
    Subtract the threshold value from the remaining pixel intensities?:No
    Number of pixels by which to expand the thresholding around those excluded bright pixels:0.0
    Select the thresholding method:Manual
    Manual threshold:0.25
    Lower and upper bounds on threshold:0.000000,1.000000
    Threshold correction factor:11
    Approximate fraction of image covered by objects?:0.01
    Select the input objects:None
    Two-class or three-class thresholding?:Three classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground
    Select the measurement to threshold with:None

EnhanceOrSuppressFeatures:[module_num:9|svn_version:\'10591\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select the input image:GreenThresh
    Name the output image:GreenFiltered
    Select the operation:Suppress
    Feature size:10
    Feature type:Speckles
    Range of hole sizes:1,10

IdentifyPrimaryObjects:[module_num:10|svn_version:\'10826\'|variable_revision_number:8|show_window:False|notes:\x5B\x5D]
    Select the input image:RedCorr
    Name the primary objects to be identified:RedObjects
    Typical diameter of objects, in pixel units (Min,Max):20,60
    Discard objects outside the diameter range?:Yes
    Try to merge too small objects with nearby larger objects?:No
    Discard objects touching the border of the image?:No
    Select the thresholding method:Otsu Global
    Threshold correction factor:1
    Lower and upper bounds on threshold:0.15,1.0
    Approximate fraction of image covered by objects?:0.01
    Method to distinguish clumped objects:Shape
    Method to draw dividing lines between clumped objects:Shape
    Size of smoothing filter:10
    Suppress local maxima that are closer than this minimum allowed distance:7
    Speed up by using lower-resolution image to find local maxima?:Yes
    Name the outline image:RedOutlines
    Fill holes in identified objects?:No
    Automatically calculate size of smoothing filter?:Yes
    Automatically calculate minimum allowed distance between local maxima?:Yes
    Manual threshold:0.0
    Select binary image:None
    Retain outlines of the identified objects?:Yes
    Automatically calculate the threshold using the Otsu method?:Yes
    Enter Laplacian of Gaussian threshold:0.5
    Two-class or three-class thresholding?:Three classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Background
    Automatically calculate the size of objects for the Laplacian of Gaussian filter?:Yes
    Enter LoG filter diameter:5
    Handling of objects if excessive number of objects identified:Continue
    Maximum number of objects:500
    Select the measurement to threshold with:None

IdentifyPrimaryObjects:[module_num:11|svn_version:\'10826\'|variable_revision_number:8|show_window:False|notes:\x5B\x5D]
    Select the input image:GreenFiltered
    Name the primary objects to be identified:GreenObjects
    Typical diameter of objects, in pixel units (Min,Max):10,40
    Discard objects outside the diameter range?:No
    Try to merge too small objects with nearby larger objects?:No
    Discard objects touching the border of the image?:No
    Select the thresholding method:Manual
    Threshold correction factor:1
    Lower and upper bounds on threshold:0.000000,1.000000
    Approximate fraction of image covered by objects?:0.01
    Method to distinguish clumped objects:None
    Method to draw dividing lines between clumped objects:Intensity
    Size of smoothing filter:10
    Suppress local maxima that are closer than this minimum allowed distance:7
    Speed up by using lower-resolution image to find local maxima?:Yes
    Name the outline image:PrimaryOutlines
    Fill holes in identified objects?:No
    Automatically calculate size of smoothing filter?:Yes
    Automatically calculate minimum allowed distance between local maxima?:Yes
    Manual threshold:0.001
    Select binary image:None
    Retain outlines of the identified objects?:No
    Automatically calculate the threshold using the Otsu method?:Yes
    Enter Laplacian of Gaussian threshold:0.5
    Two-class or three-class thresholding?:Two classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground
    Automatically calculate the size of objects for the Laplacian of Gaussian filter?:Yes
    Enter LoG filter diameter:5
    Handling of objects if excessive number of objects identified:Continue
    Maximum number of objects:500
    Select the measurement to threshold with:None

ConvertObjectsToImage:[module_num:12|svn_version:\'10807\'|variable_revision_number:1|show_window:False|notes:\x5B\x5D]
    Select the input objects:GreenObjects
    Name the output image:GreenObjectsImg
    Select the color type:Grayscale
    Select the colormap:Default

RelateObjects:[module_num:13|svn_version:\'10300\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select the input child objects:GreenObjects
    Select the input parent objects:RedObjects
    Calculate distances?:None
    Calculate per-parent means for all child measurements?:No
    Calculate distances to other parents?:No
    Parent name:None

IdentifyPrimaryObjects:[module_num:14|svn_version:\'10826\'|variable_revision_number:8|show_window:False|notes:\x5B\x5D]
    Select the input image:BlueCorr
    Name the primary objects to be identified:BlueObjects
    Typical diameter of objects, in pixel units (Min,Max):20,60
    Discard objects outside the diameter range?:Yes
    Try to merge too small objects with nearby larger objects?:No
    Discard objects touching the border of the image?:No
    Select the thresholding method:Otsu Global
    Threshold correction factor:1
    Lower and upper bounds on threshold:0.000000,1.000000
    Approximate fraction of image covered by objects?:0.01
    Method to distinguish clumped objects:Shape
    Method to draw dividing lines between clumped objects:Shape
    Size of smoothing filter:10
    Suppress local maxima that are closer than this minimum allowed distance:7
    Speed up by using lower-resolution image to find local maxima?:Yes
    Name the outline image:BlueOutlines
    Fill holes in identified objects?:No
    Automatically calculate size of smoothing filter?:Yes
    Automatically calculate minimum allowed distance between local maxima?:Yes
    Manual threshold:0.001
    Select binary image:None
    Retain outlines of the identified objects?:Yes
    Automatically calculate the threshold using the Otsu method?:Yes
    Enter Laplacian of Gaussian threshold:0.5
    Two-class or three-class thresholding?:Three classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Background
    Automatically calculate the size of objects for the Laplacian of Gaussian filter?:Yes
    Enter LoG filter diameter:5
    Handling of objects if excessive number of objects identified:Continue
    Maximum number of objects:500
    Select the measurement to threshold with:None

GrayToColor:[module_num:15|svn_version:\'10341\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Select a color scheme:RGB
    Select the input image to be colored red:RedOutlines
    Select the input image to be colored green:GreenObjectsImg
    Select the input image to be colored blue:BlueOutlines
    Name the output image:processed
    Relative weight for the red image:1
    Relative weight for the green image:1
    Relative weight for the blue image:1
    Select the input image to be colored cyan:Leave this black
    Select the input image to be colored magenta:Leave this black
    Select the input image to be colored yellow:Leave this black
    Select the input image that determines brightness:Leave this black
    Relative weight for the cyan image:1
    Relative weight for the magenta image:1
    Relative weight for the yellow image:1
    Relative weight for the brightness image:1
    Select the input image to add to the stacked image:None

SaveImages:[module_num:16|svn_version:\'10822\'|variable_revision_number:7|show_window:False|notes:\x5B\x5D]
    Select the type of image to save:Image
    Select the image to save:processed
    Select the objects to save:None
    Select the module display window to save:None
    Select method for constructing file names:From image filename
    Select image name for file prefix:Original
    Enter single file name:OrigBlue
    Do you want to add a suffix to the image file name?:Yes
    Text to append to the image name: processed
    Select file format to use:png
    Output file location:Default Output Folder\x7C\\g<Group>\\\\
    Image bit depth:8
    Overwrite existing files without warning?:Yes
    Select how often to save:Every cycle
    Rescale the images? :No
    Save as grayscale or color image?:Grayscale
    Select colormap:gray
    Store file and path information to the saved image?:No
    Create subfolders in the output folder?:Yes

ExportToSpreadsheet:[module_num:17|svn_version:\'10880\'|variable_revision_number:7|show_window:False|notes:\x5B\x5D]
    Select or enter the column delimiter:Comma (",")
    Prepend the output file name to the data file names?:No
    Add image metadata columns to your object data file?:Yes
    Limit output to a size that is allowed in Excel?:No
    Select the columns of measurements to export?:Yes
    Calculate the per-image mean values for object measurements?:Yes
    Calculate the per-image median values for object measurements?:No
    Calculate the per-image standard deviation values for object measurements?:No
    Output file location:Default Output Folder\x7CNone
    Create a GenePattern GCT file?:No
    Select source of sample row name:Metadata
    Select the image to use as the identifier:None
    Select the metadata to use as the identifier:None
    Export all measurements, using default file names?:No
    Press button to select measurements to export:Image\x7CCount_BlueObjects,Image\x7CCount_RedObjects,Image\x7CCount_GreenObjects,Image\x7CFileName_Original,Image\x7CMetadata_Group,Image\x7CMetadata_Number,RedObjects\x7CChildren_GreenObjects_Count,GreenObjects\x7CParent_RedObjects
    Data to export:Image
    Combine these object measurements with those of the previous object?:No
    File name:DATA.csv
    Use the object name for the file name?:No
